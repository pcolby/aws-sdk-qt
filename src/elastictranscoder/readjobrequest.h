// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_READJOBREQUEST_H
#define QTAWS_READJOBREQUEST_H

#include "elastictranscoderrequest.h"

namespace QtAws {
namespace ElasticTranscoder {

class ReadJobRequestPrivate;

class QTAWSELASTICTRANSCODER_EXPORT ReadJobRequest : public ElasticTranscoderRequest {

public:
    ReadJobRequest(const ReadJobRequest &other);
    ReadJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ReadJobRequest)

};

} // namespace ElasticTranscoder
} // namespace QtAws

#endif
