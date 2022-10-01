// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "searchvocabulariesresponse.h"
#include "searchvocabulariesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Connect {

/*!
 * \class QtAws::Connect::SearchVocabulariesResponse
 * \brief The SearchVocabulariesResponse class provides an interace for Connect SearchVocabularies responses.
 *
 * \inmodule QtAwsConnect
 *
 *  Amazon Connect is a cloud-based contact center solution that you use to set up and manage a customer contact center and
 *  provide reliable customer engagement at any
 * 
 *  scale>
 * 
 *  Amazon Connect provides metrics and real-time reporting that enable you to optimize contact routing. You can also
 *  resolve customer issues more efficiently by getting customers in touch with the appropriate
 * 
 *  agents>
 * 
 *  There are limits to the number of Amazon Connect resources that you can create. There are also limits to the number of
 *  requests that you can make per second. For more information, see <a
 *  href="https://docs.aws.amazon.com/connect/latest/adminguide/amazon-connect-service-limits.html">Amazon Connect Service
 *  Quotas</a> in the <i>Amazon Connect Administrator
 * 
 *  Guide</i>>
 * 
 *  You can connect programmatically to an Amazon Web Services service by using an endpoint. For a list of Amazon Connect
 *  endpoints, see <a href="https://docs.aws.amazon.com/general/latest/gr/connect_region.html">Amazon Connect
 * 
 *  Endpoints</a>> <note>
 * 
 *  Working with flows? Check out the <a
 *  href="https://docs.aws.amazon.com/connect/latest/adminguide/flow-language.html">Amazon Connect Flow
 *
 * \sa ConnectClient::searchVocabularies
 */

/*!
 * Constructs a SearchVocabulariesResponse object for \a reply to \a request, with parent \a parent.
 */
SearchVocabulariesResponse::SearchVocabulariesResponse(
        const SearchVocabulariesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConnectResponse(new SearchVocabulariesResponsePrivate(this), parent)
{
    setRequest(new SearchVocabulariesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SearchVocabulariesRequest * SearchVocabulariesResponse::request() const
{
    Q_D(const SearchVocabulariesResponse);
    return static_cast<const SearchVocabulariesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Connect SearchVocabularies \a response.
 */
void SearchVocabulariesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SearchVocabulariesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Connect::SearchVocabulariesResponsePrivate
 * \brief The SearchVocabulariesResponsePrivate class provides private implementation for SearchVocabulariesResponse.
 * \internal
 *
 * \inmodule QtAwsConnect
 */

/*!
 * Constructs a SearchVocabulariesResponsePrivate object with public implementation \a q.
 */
SearchVocabulariesResponsePrivate::SearchVocabulariesResponsePrivate(
    SearchVocabulariesResponse * const q) : ConnectResponsePrivate(q)
{

}

/*!
 * Parses a Connect SearchVocabularies response element from \a xml.
 */
void SearchVocabulariesResponsePrivate::parseSearchVocabulariesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SearchVocabulariesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Connect
} // namespace QtAws
