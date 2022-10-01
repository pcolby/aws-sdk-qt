// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listmodelmetadataresponse.h"
#include "listmodelmetadataresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListModelMetadataResponse
 * \brief The ListModelMetadataResponse class provides an interace for SageMaker ListModelMetadata responses.
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
 * \sa SageMakerClient::listModelMetadata
 */

/*!
 * Constructs a ListModelMetadataResponse object for \a reply to \a request, with parent \a parent.
 */
ListModelMetadataResponse::ListModelMetadataResponse(
        const ListModelMetadataRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new ListModelMetadataResponsePrivate(this), parent)
{
    setRequest(new ListModelMetadataRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListModelMetadataRequest * ListModelMetadataResponse::request() const
{
    Q_D(const ListModelMetadataResponse);
    return static_cast<const ListModelMetadataRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker ListModelMetadata \a response.
 */
void ListModelMetadataResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListModelMetadataResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::ListModelMetadataResponsePrivate
 * \brief The ListModelMetadataResponsePrivate class provides private implementation for ListModelMetadataResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListModelMetadataResponsePrivate object with public implementation \a q.
 */
ListModelMetadataResponsePrivate::ListModelMetadataResponsePrivate(
    ListModelMetadataResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker ListModelMetadata response element from \a xml.
 */
void ListModelMetadataResponsePrivate::parseListModelMetadataResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListModelMetadataResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
