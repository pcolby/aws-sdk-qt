// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEIMAGEBUILDERREQUEST_H
#define QTAWS_DELETEIMAGEBUILDERREQUEST_H

#include "appstreamrequest.h"

namespace QtAws {
namespace AppStream {

class DeleteImageBuilderRequestPrivate;

class QTAWSAPPSTREAM_EXPORT DeleteImageBuilderRequest : public AppStreamRequest {

public:
    DeleteImageBuilderRequest(const DeleteImageBuilderRequest &other);
    DeleteImageBuilderRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteImageBuilderRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
