// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listpipelinesresponse.h"
#include "listpipelinesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticTranscoder {

/*!
 * \class QtAws::ElasticTranscoder::ListPipelinesResponse
 * \brief The ListPipelinesResponse class provides an interace for ElasticTranscoder ListPipelines responses.
 *
 * \inmodule QtAwsElasticTranscoder
 *
 *  <fullname>AWS Elastic Transcoder Service</fullname>
 * 
 *  The AWS Elastic Transcoder
 *
 * \sa ElasticTranscoderClient::listPipelines
 */

/*!
 * Constructs a ListPipelinesResponse object for \a reply to \a request, with parent \a parent.
 */
ListPipelinesResponse::ListPipelinesResponse(
        const ListPipelinesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticTranscoderResponse(new ListPipelinesResponsePrivate(this), parent)
{
    setRequest(new ListPipelinesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListPipelinesRequest * ListPipelinesResponse::request() const
{
    Q_D(const ListPipelinesResponse);
    return static_cast<const ListPipelinesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ElasticTranscoder ListPipelines \a response.
 */
void ListPipelinesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListPipelinesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ElasticTranscoder::ListPipelinesResponsePrivate
 * \brief The ListPipelinesResponsePrivate class provides private implementation for ListPipelinesResponse.
 * \internal
 *
 * \inmodule QtAwsElasticTranscoder
 */

/*!
 * Constructs a ListPipelinesResponsePrivate object with public implementation \a q.
 */
ListPipelinesResponsePrivate::ListPipelinesResponsePrivate(
    ListPipelinesResponse * const q) : ElasticTranscoderResponsePrivate(q)
{

}

/*!
 * Parses a ElasticTranscoder ListPipelines response element from \a xml.
 */
void ListPipelinesResponsePrivate::parseListPipelinesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPipelinesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ElasticTranscoder
} // namespace QtAws
