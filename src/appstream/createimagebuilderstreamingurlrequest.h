// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEIMAGEBUILDERSTREAMINGURLREQUEST_H
#define QTAWS_CREATEIMAGEBUILDERSTREAMINGURLREQUEST_H

#include "appstreamrequest.h"

namespace QtAws {
namespace AppStream {

class CreateImageBuilderStreamingURLRequestPrivate;

class QTAWSAPPSTREAM_EXPORT CreateImageBuilderStreamingURLRequest : public AppStreamRequest {

public:
    CreateImageBuilderStreamingURLRequest(const CreateImageBuilderStreamingURLRequest &other);
    CreateImageBuilderStreamingURLRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateImageBuilderStreamingURLRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
