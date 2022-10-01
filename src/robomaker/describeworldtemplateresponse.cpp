// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeworldtemplateresponse.h"
#include "describeworldtemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::DescribeWorldTemplateResponse
 * \brief The DescribeWorldTemplateResponse class provides an interace for RoboMaker DescribeWorldTemplate responses.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::describeWorldTemplate
 */

/*!
 * Constructs a DescribeWorldTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeWorldTemplateResponse::DescribeWorldTemplateResponse(
        const DescribeWorldTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RoboMakerResponse(new DescribeWorldTemplateResponsePrivate(this), parent)
{
    setRequest(new DescribeWorldTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeWorldTemplateRequest * DescribeWorldTemplateResponse::request() const
{
    Q_D(const DescribeWorldTemplateResponse);
    return static_cast<const DescribeWorldTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RoboMaker DescribeWorldTemplate \a response.
 */
void DescribeWorldTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeWorldTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RoboMaker::DescribeWorldTemplateResponsePrivate
 * \brief The DescribeWorldTemplateResponsePrivate class provides private implementation for DescribeWorldTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a DescribeWorldTemplateResponsePrivate object with public implementation \a q.
 */
DescribeWorldTemplateResponsePrivate::DescribeWorldTemplateResponsePrivate(
    DescribeWorldTemplateResponse * const q) : RoboMakerResponsePrivate(q)
{

}

/*!
 * Parses a RoboMaker DescribeWorldTemplate response element from \a xml.
 */
void DescribeWorldTemplateResponsePrivate::parseDescribeWorldTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeWorldTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RoboMaker
} // namespace QtAws
