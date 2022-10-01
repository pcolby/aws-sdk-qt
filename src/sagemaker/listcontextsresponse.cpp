// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listcontextsresponse.h"
#include "listcontextsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListContextsResponse
 * \brief The ListContextsResponse class provides an interace for SageMaker ListContexts responses.
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
 * \sa SageMakerClient::listContexts
 */

/*!
 * Constructs a ListContextsResponse object for \a reply to \a request, with parent \a parent.
 */
ListContextsResponse::ListContextsResponse(
        const ListContextsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new ListContextsResponsePrivate(this), parent)
{
    setRequest(new ListContextsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListContextsRequest * ListContextsResponse::request() const
{
    Q_D(const ListContextsResponse);
    return static_cast<const ListContextsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker ListContexts \a response.
 */
void ListContextsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListContextsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::ListContextsResponsePrivate
 * \brief The ListContextsResponsePrivate class provides private implementation for ListContextsResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListContextsResponsePrivate object with public implementation \a q.
 */
ListContextsResponsePrivate::ListContextsResponsePrivate(
    ListContextsResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker ListContexts response element from \a xml.
 */
void ListContextsResponsePrivate::parseListContextsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListContextsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
