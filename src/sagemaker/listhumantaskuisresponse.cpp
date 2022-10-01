// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listhumantaskuisresponse.h"
#include "listhumantaskuisresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListHumanTaskUisResponse
 * \brief The ListHumanTaskUisResponse class provides an interace for SageMaker ListHumanTaskUis responses.
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
 * \sa SageMakerClient::listHumanTaskUis
 */

/*!
 * Constructs a ListHumanTaskUisResponse object for \a reply to \a request, with parent \a parent.
 */
ListHumanTaskUisResponse::ListHumanTaskUisResponse(
        const ListHumanTaskUisRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new ListHumanTaskUisResponsePrivate(this), parent)
{
    setRequest(new ListHumanTaskUisRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListHumanTaskUisRequest * ListHumanTaskUisResponse::request() const
{
    Q_D(const ListHumanTaskUisResponse);
    return static_cast<const ListHumanTaskUisRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker ListHumanTaskUis \a response.
 */
void ListHumanTaskUisResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListHumanTaskUisResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::ListHumanTaskUisResponsePrivate
 * \brief The ListHumanTaskUisResponsePrivate class provides private implementation for ListHumanTaskUisResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListHumanTaskUisResponsePrivate object with public implementation \a q.
 */
ListHumanTaskUisResponsePrivate::ListHumanTaskUisResponsePrivate(
    ListHumanTaskUisResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker ListHumanTaskUis response element from \a xml.
 */
void ListHumanTaskUisResponsePrivate::parseListHumanTaskUisResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListHumanTaskUisResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
