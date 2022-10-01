// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPIMAGEBUILDERREQUEST_H
#define QTAWS_STOPIMAGEBUILDERREQUEST_H

#include "appstreamrequest.h"

namespace QtAws {
namespace AppStream {

class StopImageBuilderRequestPrivate;

class QTAWSAPPSTREAM_EXPORT StopImageBuilderRequest : public AppStreamRequest {

public:
    StopImageBuilderRequest(const StopImageBuilderRequest &other);
    StopImageBuilderRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopImageBuilderRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
