// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMEDIACAPTUREPIPELINEREQUEST_H
#define QTAWS_GETMEDIACAPTUREPIPELINEREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class GetMediaCapturePipelineRequestPrivate;

class QTAWSCHIME_EXPORT GetMediaCapturePipelineRequest : public ChimeRequest {

public:
    GetMediaCapturePipelineRequest(const GetMediaCapturePipelineRequest &other);
    GetMediaCapturePipelineRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMediaCapturePipelineRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
