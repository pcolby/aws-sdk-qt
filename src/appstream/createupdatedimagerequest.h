// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEUPDATEDIMAGEREQUEST_H
#define QTAWS_CREATEUPDATEDIMAGEREQUEST_H

#include "appstreamrequest.h"

namespace QtAws {
namespace AppStream {

class CreateUpdatedImageRequestPrivate;

class QTAWSAPPSTREAM_EXPORT CreateUpdatedImageRequest : public AppStreamRequest {

public:
    CreateUpdatedImageRequest(const CreateUpdatedImageRequest &other);
    CreateUpdatedImageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateUpdatedImageRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
