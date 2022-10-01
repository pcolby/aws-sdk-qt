// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listcoderepositoriesresponse.h"
#include "listcoderepositoriesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListCodeRepositoriesResponse
 * \brief The ListCodeRepositoriesResponse class provides an interace for SageMaker ListCodeRepositories responses.
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
 * \sa SageMakerClient::listCodeRepositories
 */

/*!
 * Constructs a ListCodeRepositoriesResponse object for \a reply to \a request, with parent \a parent.
 */
ListCodeRepositoriesResponse::ListCodeRepositoriesResponse(
        const ListCodeRepositoriesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new ListCodeRepositoriesResponsePrivate(this), parent)
{
    setRequest(new ListCodeRepositoriesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListCodeRepositoriesRequest * ListCodeRepositoriesResponse::request() const
{
    Q_D(const ListCodeRepositoriesResponse);
    return static_cast<const ListCodeRepositoriesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker ListCodeRepositories \a response.
 */
void ListCodeRepositoriesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListCodeRepositoriesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::ListCodeRepositoriesResponsePrivate
 * \brief The ListCodeRepositoriesResponsePrivate class provides private implementation for ListCodeRepositoriesResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListCodeRepositoriesResponsePrivate object with public implementation \a q.
 */
ListCodeRepositoriesResponsePrivate::ListCodeRepositoriesResponsePrivate(
    ListCodeRepositoriesResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker ListCodeRepositories response element from \a xml.
 */
void ListCodeRepositoriesResponsePrivate::parseListCodeRepositoriesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListCodeRepositoriesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
