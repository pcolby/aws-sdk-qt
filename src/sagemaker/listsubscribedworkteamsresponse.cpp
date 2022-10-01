// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listsubscribedworkteamsresponse.h"
#include "listsubscribedworkteamsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListSubscribedWorkteamsResponse
 * \brief The ListSubscribedWorkteamsResponse class provides an interace for SageMaker ListSubscribedWorkteams responses.
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
 * \sa SageMakerClient::listSubscribedWorkteams
 */

/*!
 * Constructs a ListSubscribedWorkteamsResponse object for \a reply to \a request, with parent \a parent.
 */
ListSubscribedWorkteamsResponse::ListSubscribedWorkteamsResponse(
        const ListSubscribedWorkteamsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new ListSubscribedWorkteamsResponsePrivate(this), parent)
{
    setRequest(new ListSubscribedWorkteamsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListSubscribedWorkteamsRequest * ListSubscribedWorkteamsResponse::request() const
{
    Q_D(const ListSubscribedWorkteamsResponse);
    return static_cast<const ListSubscribedWorkteamsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker ListSubscribedWorkteams \a response.
 */
void ListSubscribedWorkteamsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListSubscribedWorkteamsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::ListSubscribedWorkteamsResponsePrivate
 * \brief The ListSubscribedWorkteamsResponsePrivate class provides private implementation for ListSubscribedWorkteamsResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListSubscribedWorkteamsResponsePrivate object with public implementation \a q.
 */
ListSubscribedWorkteamsResponsePrivate::ListSubscribedWorkteamsResponsePrivate(
    ListSubscribedWorkteamsResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker ListSubscribedWorkteams response element from \a xml.
 */
void ListSubscribedWorkteamsResponsePrivate::parseListSubscribedWorkteamsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListSubscribedWorkteamsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
