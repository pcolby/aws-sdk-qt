// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESTACKREQUEST_H
#define QTAWS_CREATESTACKREQUEST_H

#include "appstreamrequest.h"

namespace QtAws {
namespace AppStream {

class CreateStackRequestPrivate;

class QTAWSAPPSTREAM_EXPORT CreateStackRequest : public AppStreamRequest {

public:
    CreateStackRequest(const CreateStackRequest &other);
    CreateStackRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateStackRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
