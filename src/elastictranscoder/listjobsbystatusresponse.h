// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTJOBSBYSTATUSRESPONSE_H
#define QTAWS_LISTJOBSBYSTATUSRESPONSE_H

#include "elastictranscoderresponse.h"
#include "listjobsbystatusrequest.h"

namespace QtAws {
namespace ElasticTranscoder {

class ListJobsByStatusResponsePrivate;

class QTAWSELASTICTRANSCODER_EXPORT ListJobsByStatusResponse : public ElasticTranscoderResponse {
    Q_OBJECT

public:
    ListJobsByStatusResponse(const ListJobsByStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListJobsByStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListJobsByStatusResponse)
    Q_DISABLE_COPY(ListJobsByStatusResponse)

};

} // namespace ElasticTranscoder
} // namespace QtAws

#endif
