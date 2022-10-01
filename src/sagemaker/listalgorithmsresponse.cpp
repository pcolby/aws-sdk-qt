// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listalgorithmsresponse.h"
#include "listalgorithmsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListAlgorithmsResponse
 * \brief The ListAlgorithmsResponse class provides an interace for SageMaker ListAlgorithms responses.
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
 * \sa SageMakerClient::listAlgorithms
 */

/*!
 * Constructs a ListAlgorithmsResponse object for \a reply to \a request, with parent \a parent.
 */
ListAlgorithmsResponse::ListAlgorithmsResponse(
        const ListAlgorithmsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new ListAlgorithmsResponsePrivate(this), parent)
{
    setRequest(new ListAlgorithmsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAlgorithmsRequest * ListAlgorithmsResponse::request() const
{
    Q_D(const ListAlgorithmsResponse);
    return static_cast<const ListAlgorithmsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker ListAlgorithms \a response.
 */
void ListAlgorithmsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAlgorithmsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::ListAlgorithmsResponsePrivate
 * \brief The ListAlgorithmsResponsePrivate class provides private implementation for ListAlgorithmsResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListAlgorithmsResponsePrivate object with public implementation \a q.
 */
ListAlgorithmsResponsePrivate::ListAlgorithmsResponsePrivate(
    ListAlgorithmsResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker ListAlgorithms response element from \a xml.
 */
void ListAlgorithmsResponsePrivate::parseListAlgorithmsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAlgorithmsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
