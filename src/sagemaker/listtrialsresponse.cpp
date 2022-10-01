// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtrialsresponse.h"
#include "listtrialsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListTrialsResponse
 * \brief The ListTrialsResponse class provides an interace for SageMaker ListTrials responses.
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
 * \sa SageMakerClient::listTrials
 */

/*!
 * Constructs a ListTrialsResponse object for \a reply to \a request, with parent \a parent.
 */
ListTrialsResponse::ListTrialsResponse(
        const ListTrialsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new ListTrialsResponsePrivate(this), parent)
{
    setRequest(new ListTrialsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListTrialsRequest * ListTrialsResponse::request() const
{
    Q_D(const ListTrialsResponse);
    return static_cast<const ListTrialsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker ListTrials \a response.
 */
void ListTrialsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListTrialsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::ListTrialsResponsePrivate
 * \brief The ListTrialsResponsePrivate class provides private implementation for ListTrialsResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListTrialsResponsePrivate object with public implementation \a q.
 */
ListTrialsResponsePrivate::ListTrialsResponsePrivate(
    ListTrialsResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker ListTrials response element from \a xml.
 */
void ListTrialsResponsePrivate::parseListTrialsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTrialsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
