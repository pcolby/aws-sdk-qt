// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listimageversionsresponse.h"
#include "listimageversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListImageVersionsResponse
 * \brief The ListImageVersionsResponse class provides an interace for SageMaker ListImageVersions responses.
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
 * \sa SageMakerClient::listImageVersions
 */

/*!
 * Constructs a ListImageVersionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListImageVersionsResponse::ListImageVersionsResponse(
        const ListImageVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new ListImageVersionsResponsePrivate(this), parent)
{
    setRequest(new ListImageVersionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListImageVersionsRequest * ListImageVersionsResponse::request() const
{
    Q_D(const ListImageVersionsResponse);
    return static_cast<const ListImageVersionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker ListImageVersions \a response.
 */
void ListImageVersionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListImageVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::ListImageVersionsResponsePrivate
 * \brief The ListImageVersionsResponsePrivate class provides private implementation for ListImageVersionsResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListImageVersionsResponsePrivate object with public implementation \a q.
 */
ListImageVersionsResponsePrivate::ListImageVersionsResponsePrivate(
    ListImageVersionsResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker ListImageVersions response element from \a xml.
 */
void ListImageVersionsResponsePrivate::parseListImageVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListImageVersionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
