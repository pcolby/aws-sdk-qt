// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTCONTENTUPLOADREQUEST_H
#define QTAWS_STARTCONTENTUPLOADREQUEST_H

#include "wisdomrequest.h"

namespace QtAws {
namespace Wisdom {

class StartContentUploadRequestPrivate;

class QTAWSWISDOM_EXPORT StartContentUploadRequest : public WisdomRequest {

public:
    StartContentUploadRequest(const StartContentUploadRequest &other);
    StartContentUploadRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartContentUploadRequest)

};

} // namespace Wisdom
} // namespace QtAws

#endif
