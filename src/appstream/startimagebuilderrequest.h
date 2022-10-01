// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTIMAGEBUILDERREQUEST_H
#define QTAWS_STARTIMAGEBUILDERREQUEST_H

#include "appstreamrequest.h"

namespace QtAws {
namespace AppStream {

class StartImageBuilderRequestPrivate;

class QTAWSAPPSTREAM_EXPORT StartImageBuilderRequest : public AppStreamRequest {

public:
    StartImageBuilderRequest(const StartImageBuilderRequest &other);
    StartImageBuilderRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartImageBuilderRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
