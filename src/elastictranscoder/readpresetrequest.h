// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_READPRESETREQUEST_H
#define QTAWS_READPRESETREQUEST_H

#include "elastictranscoderrequest.h"

namespace QtAws {
namespace ElasticTranscoder {

class ReadPresetRequestPrivate;

class QTAWSELASTICTRANSCODER_EXPORT ReadPresetRequest : public ElasticTranscoderRequest {

public:
    ReadPresetRequest(const ReadPresetRequest &other);
    ReadPresetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ReadPresetRequest)

};

} // namespace ElasticTranscoder
} // namespace QtAws

#endif
