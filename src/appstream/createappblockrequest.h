// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAPPBLOCKREQUEST_H
#define QTAWS_CREATEAPPBLOCKREQUEST_H

#include "appstreamrequest.h"

namespace QtAws {
namespace AppStream {

class CreateAppBlockRequestPrivate;

class QTAWSAPPSTREAM_EXPORT CreateAppBlockRequest : public AppStreamRequest {

public:
    CreateAppBlockRequest(const CreateAppBlockRequest &other);
    CreateAppBlockRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAppBlockRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
