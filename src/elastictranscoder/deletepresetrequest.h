// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPRESETREQUEST_H
#define QTAWS_DELETEPRESETREQUEST_H

#include "elastictranscoderrequest.h"

namespace QtAws {
namespace ElasticTranscoder {

class DeletePresetRequestPrivate;

class QTAWSELASTICTRANSCODER_EXPORT DeletePresetRequest : public ElasticTranscoderRequest {

public:
    DeletePresetRequest(const DeletePresetRequest &other);
    DeletePresetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeletePresetRequest)

};

} // namespace ElasticTranscoder
} // namespace QtAws

#endif
