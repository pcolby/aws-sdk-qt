// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESTREAMINGURLREQUEST_H
#define QTAWS_CREATESTREAMINGURLREQUEST_H

#include "appstreamrequest.h"

namespace QtAws {
namespace AppStream {

class CreateStreamingURLRequestPrivate;

class QTAWSAPPSTREAM_EXPORT CreateStreamingURLRequest : public AppStreamRequest {

public:
    CreateStreamingURLRequest(const CreateStreamingURLRequest &other);
    CreateStreamingURLRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateStreamingURLRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
