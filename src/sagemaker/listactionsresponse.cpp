// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listactionsresponse.h"
#include "listactionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListActionsResponse
 * \brief The ListActionsResponse class provides an interace for SageMaker ListActions responses.
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
 * \sa SageMakerClient::listActions
 */

/*!
 * Constructs a ListActionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListActionsResponse::ListActionsResponse(
        const ListActionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new ListActionsResponsePrivate(this), parent)
{
    setRequest(new ListActionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListActionsRequest * ListActionsResponse::request() const
{
    Q_D(const ListActionsResponse);
    return static_cast<const ListActionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker ListActions \a response.
 */
void ListActionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListActionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::ListActionsResponsePrivate
 * \brief The ListActionsResponsePrivate class provides private implementation for ListActionsResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListActionsResponsePrivate object with public implementation \a q.
 */
ListActionsResponsePrivate::ListActionsResponsePrivate(
    ListActionsResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker ListActions response element from \a xml.
 */
void ListActionsResponsePrivate::parseListActionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListActionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
