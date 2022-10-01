// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEIMAGEBUILDERREQUEST_H
#define QTAWS_CREATEIMAGEBUILDERREQUEST_H

#include "appstreamrequest.h"

namespace QtAws {
namespace AppStream {

class CreateImageBuilderRequestPrivate;

class QTAWSAPPSTREAM_EXPORT CreateImageBuilderRequest : public AppStreamRequest {

public:
    CreateImageBuilderRequest(const CreateImageBuilderRequest &other);
    CreateImageBuilderRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateImageBuilderRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
