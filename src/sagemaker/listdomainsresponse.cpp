// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdomainsresponse.h"
#include "listdomainsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListDomainsResponse
 * \brief The ListDomainsResponse class provides an interace for SageMaker ListDomains responses.
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
 * \sa SageMakerClient::listDomains
 */

/*!
 * Constructs a ListDomainsResponse object for \a reply to \a request, with parent \a parent.
 */
ListDomainsResponse::ListDomainsResponse(
        const ListDomainsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new ListDomainsResponsePrivate(this), parent)
{
    setRequest(new ListDomainsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDomainsRequest * ListDomainsResponse::request() const
{
    Q_D(const ListDomainsResponse);
    return static_cast<const ListDomainsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker ListDomains \a response.
 */
void ListDomainsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDomainsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::ListDomainsResponsePrivate
 * \brief The ListDomainsResponsePrivate class provides private implementation for ListDomainsResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListDomainsResponsePrivate object with public implementation \a q.
 */
ListDomainsResponsePrivate::ListDomainsResponsePrivate(
    ListDomainsResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker ListDomains response element from \a xml.
 */
void ListDomainsResponsePrivate::parseListDomainsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDomainsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
