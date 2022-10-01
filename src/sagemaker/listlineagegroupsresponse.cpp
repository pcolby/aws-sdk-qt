// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listlineagegroupsresponse.h"
#include "listlineagegroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListLineageGroupsResponse
 * \brief The ListLineageGroupsResponse class provides an interace for SageMaker ListLineageGroups responses.
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
 * \sa SageMakerClient::listLineageGroups
 */

/*!
 * Constructs a ListLineageGroupsResponse object for \a reply to \a request, with parent \a parent.
 */
ListLineageGroupsResponse::ListLineageGroupsResponse(
        const ListLineageGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new ListLineageGroupsResponsePrivate(this), parent)
{
    setRequest(new ListLineageGroupsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListLineageGroupsRequest * ListLineageGroupsResponse::request() const
{
    Q_D(const ListLineageGroupsResponse);
    return static_cast<const ListLineageGroupsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker ListLineageGroups \a response.
 */
void ListLineageGroupsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListLineageGroupsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::ListLineageGroupsResponsePrivate
 * \brief The ListLineageGroupsResponsePrivate class provides private implementation for ListLineageGroupsResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListLineageGroupsResponsePrivate object with public implementation \a q.
 */
ListLineageGroupsResponsePrivate::ListLineageGroupsResponsePrivate(
    ListLineageGroupsResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker ListLineageGroups response element from \a xml.
 */
void ListLineageGroupsResponsePrivate::parseListLineageGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListLineageGroupsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
