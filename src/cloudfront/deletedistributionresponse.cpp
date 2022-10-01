// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletedistributionresponse.h"
#include "deletedistributionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::DeleteDistributionResponse
 * \brief The DeleteDistributionResponse class provides an interace for CloudFront DeleteDistribution responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::deleteDistribution
 */

/*!
 * Constructs a DeleteDistributionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteDistributionResponse::DeleteDistributionResponse(
        const DeleteDistributionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new DeleteDistributionResponsePrivate(this), parent)
{
    setRequest(new DeleteDistributionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteDistributionRequest * DeleteDistributionResponse::request() const
{
    Q_D(const DeleteDistributionResponse);
    return static_cast<const DeleteDistributionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront DeleteDistribution \a response.
 */
void DeleteDistributionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteDistributionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::DeleteDistributionResponsePrivate
 * \brief The DeleteDistributionResponsePrivate class provides private implementation for DeleteDistributionResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a DeleteDistributionResponsePrivate object with public implementation \a q.
 */
DeleteDistributionResponsePrivate::DeleteDistributionResponsePrivate(
    DeleteDistributionResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront DeleteDistribution response element from \a xml.
 */
void DeleteDistributionResponsePrivate::parseDeleteDistributionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDistributionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
