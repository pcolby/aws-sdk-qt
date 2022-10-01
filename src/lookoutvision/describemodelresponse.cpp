// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describemodelresponse.h"
#include "describemodelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LookoutVision {

/*!
 * \class QtAws::LookoutVision::DescribeModelResponse
 * \brief The DescribeModelResponse class provides an interace for LookoutVision DescribeModel responses.
 *
 * \inmodule QtAwsLookoutVision
 *
 *  This is the Amazon Lookout for Vision API Reference. It provides descriptions of actions, data types, common parameters,
 *  and common
 * 
 *  errors>
 * 
 *  Amazon Lookout for Vision enables you to find visual defects in industrial products, accurately and at scale. It uses
 *  computer vision to identify missing components in an industrial product, damage to vehicles or structures,
 *  irregularities in production lines, and even minuscule defects in silicon wafers — or any other physical item where
 *  quality is important such as a missing capacitor on printed circuit
 *
 * \sa LookoutVisionClient::describeModel
 */

/*!
 * Constructs a DescribeModelResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeModelResponse::DescribeModelResponse(
        const DescribeModelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LookoutVisionResponse(new DescribeModelResponsePrivate(this), parent)
{
    setRequest(new DescribeModelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeModelRequest * DescribeModelResponse::request() const
{
    Q_D(const DescribeModelResponse);
    return static_cast<const DescribeModelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LookoutVision DescribeModel \a response.
 */
void DescribeModelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeModelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LookoutVision::DescribeModelResponsePrivate
 * \brief The DescribeModelResponsePrivate class provides private implementation for DescribeModelResponse.
 * \internal
 *
 * \inmodule QtAwsLookoutVision
 */

/*!
 * Constructs a DescribeModelResponsePrivate object with public implementation \a q.
 */
DescribeModelResponsePrivate::DescribeModelResponsePrivate(
    DescribeModelResponse * const q) : LookoutVisionResponsePrivate(q)
{

}

/*!
 * Parses a LookoutVision DescribeModel response element from \a xml.
 */
void DescribeModelResponsePrivate::parseDescribeModelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeModelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LookoutVision
} // namespace QtAws
