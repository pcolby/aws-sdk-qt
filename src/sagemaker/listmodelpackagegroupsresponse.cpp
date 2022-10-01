// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listmodelpackagegroupsresponse.h"
#include "listmodelpackagegroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListModelPackageGroupsResponse
 * \brief The ListModelPackageGroupsResponse class provides an interace for SageMaker ListModelPackageGroups responses.
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
 * \sa SageMakerClient::listModelPackageGroups
 */

/*!
 * Constructs a ListModelPackageGroupsResponse object for \a reply to \a request, with parent \a parent.
 */
ListModelPackageGroupsResponse::ListModelPackageGroupsResponse(
        const ListModelPackageGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new ListModelPackageGroupsResponsePrivate(this), parent)
{
    setRequest(new ListModelPackageGroupsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListModelPackageGroupsRequest * ListModelPackageGroupsResponse::request() const
{
    Q_D(const ListModelPackageGroupsResponse);
    return static_cast<const ListModelPackageGroupsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker ListModelPackageGroups \a response.
 */
void ListModelPackageGroupsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListModelPackageGroupsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::ListModelPackageGroupsResponsePrivate
 * \brief The ListModelPackageGroupsResponsePrivate class provides private implementation for ListModelPackageGroupsResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListModelPackageGroupsResponsePrivate object with public implementation \a q.
 */
ListModelPackageGroupsResponsePrivate::ListModelPackageGroupsResponsePrivate(
    ListModelPackageGroupsResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker ListModelPackageGroups response element from \a xml.
 */
void ListModelPackageGroupsResponsePrivate::parseListModelPackageGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListModelPackageGroupsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
