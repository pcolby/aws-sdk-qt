// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listfeaturegroupsresponse.h"
#include "listfeaturegroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListFeatureGroupsResponse
 * \brief The ListFeatureGroupsResponse class provides an interace for SageMaker ListFeatureGroups responses.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing SageMaker resources.
 * 
 *  </p
 * 
 *  Other
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/whatis.html#first-time-user">SageMaker Developer Guide</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/augmented-ai/2019-11-07/APIReference/Welcome.html">Amazon Augmented AI Runtime API
 *  Reference</a>
 *
 * \sa SageMakerClient::listFeatureGroups
 */

/*!
 * Constructs a ListFeatureGroupsResponse object for \a reply to \a request, with parent \a parent.
 */
ListFeatureGroupsResponse::ListFeatureGroupsResponse(
        const ListFeatureGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new ListFeatureGroupsResponsePrivate(this), parent)
{
    setRequest(new ListFeatureGroupsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListFeatureGroupsRequest * ListFeatureGroupsResponse::request() const
{
    Q_D(const ListFeatureGroupsResponse);
    return static_cast<const ListFeatureGroupsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker ListFeatureGroups \a response.
 */
void ListFeatureGroupsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListFeatureGroupsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::ListFeatureGroupsResponsePrivate
 * \brief The ListFeatureGroupsResponsePrivate class provides private implementation for ListFeatureGroupsResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListFeatureGroupsResponsePrivate object with public implementation \a q.
 */
ListFeatureGroupsResponsePrivate::ListFeatureGroupsResponsePrivate(
    ListFeatureGroupsResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker ListFeatureGroups response element from \a xml.
 */
void ListFeatureGroupsResponsePrivate::parseListFeatureGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListFeatureGroupsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
