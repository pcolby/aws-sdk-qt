// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ELASTICTRANSCODERRESPONSE_H
#define QTAWS_ELASTICTRANSCODERRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawselastictranscoderglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace ElasticTranscoder {

class ElasticTranscoderResponsePrivate;

class QTAWSELASTICTRANSCODER_EXPORT ElasticTranscoderResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    ElasticTranscoderResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    ElasticTranscoderResponse(ElasticTranscoderResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ElasticTranscoderResponse)
    Q_DISABLE_COPY(ElasticTranscoderResponse)

};

} // namespace ElasticTranscoder
} // namespace QtAws

#endif
