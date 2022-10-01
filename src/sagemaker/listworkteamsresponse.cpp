// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listworkteamsresponse.h"
#include "listworkteamsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListWorkteamsResponse
 * \brief The ListWorkteamsResponse class provides an interace for SageMaker ListWorkteams responses.
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
 * \sa SageMakerClient::listWorkteams
 */

/*!
 * Constructs a ListWorkteamsResponse object for \a reply to \a request, with parent \a parent.
 */
ListWorkteamsResponse::ListWorkteamsResponse(
        const ListWorkteamsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new ListWorkteamsResponsePrivate(this), parent)
{
    setRequest(new ListWorkteamsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListWorkteamsRequest * ListWorkteamsResponse::request() const
{
    Q_D(const ListWorkteamsResponse);
    return static_cast<const ListWorkteamsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker ListWorkteams \a response.
 */
void ListWorkteamsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListWorkteamsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::ListWorkteamsResponsePrivate
 * \brief The ListWorkteamsResponsePrivate class provides private implementation for ListWorkteamsResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListWorkteamsResponsePrivate object with public implementation \a q.
 */
ListWorkteamsResponsePrivate::ListWorkteamsResponsePrivate(
    ListWorkteamsResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker ListWorkteams response element from \a xml.
 */
void ListWorkteamsResponsePrivate::parseListWorkteamsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListWorkteamsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
