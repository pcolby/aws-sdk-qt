// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_READJOBRESPONSE_H
#define QTAWS_READJOBRESPONSE_H

#include "elastictranscoderresponse.h"
#include "readjobrequest.h"

namespace QtAws {
namespace ElasticTranscoder {

class ReadJobResponsePrivate;

class QTAWSELASTICTRANSCODER_EXPORT ReadJobResponse : public ElasticTranscoderResponse {
    Q_OBJECT

public:
    ReadJobResponse(const ReadJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ReadJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ReadJobResponse)
    Q_DISABLE_COPY(ReadJobResponse)

};

} // namespace ElasticTranscoder
} // namespace QtAws

#endif
