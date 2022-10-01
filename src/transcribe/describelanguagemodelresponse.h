// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELANGUAGEMODELRESPONSE_H
#define QTAWS_DESCRIBELANGUAGEMODELRESPONSE_H

#include "transcriberesponse.h"
#include "describelanguagemodelrequest.h"

namespace QtAws {
namespace Transcribe {

class DescribeLanguageModelResponsePrivate;

class QTAWSTRANSCRIBE_EXPORT DescribeLanguageModelResponse : public TranscribeResponse {
    Q_OBJECT

public:
    DescribeLanguageModelResponse(const DescribeLanguageModelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeLanguageModelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLanguageModelResponse)
    Q_DISABLE_COPY(DescribeLanguageModelResponse)

};

} // namespace Transcribe
} // namespace QtAws

#endif
