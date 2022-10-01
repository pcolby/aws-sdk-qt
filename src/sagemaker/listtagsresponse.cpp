// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtagsresponse.h"
#include "listtagsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListTagsResponse
 * \brief The ListTagsResponse class provides an interace for SageMaker ListTags responses.
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
 * \sa SageMakerClient::listTags
 */

/*!
 * Constructs a ListTagsResponse object for \a reply to \a request, with parent \a parent.
 */
ListTagsResponse::ListTagsResponse(
        const ListTagsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new ListTagsResponsePrivate(this), parent)
{
    setRequest(new ListTagsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListTagsRequest * ListTagsResponse::request() const
{
    Q_D(const ListTagsResponse);
    return static_cast<const ListTagsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker ListTags \a response.
 */
void ListTagsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListTagsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::ListTagsResponsePrivate
 * \brief The ListTagsResponsePrivate class provides private implementation for ListTagsResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListTagsResponsePrivate object with public implementation \a q.
 */
ListTagsResponsePrivate::ListTagsResponsePrivate(
    ListTagsResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker ListTags response element from \a xml.
 */
void ListTagsResponsePrivate::parseListTagsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTagsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
