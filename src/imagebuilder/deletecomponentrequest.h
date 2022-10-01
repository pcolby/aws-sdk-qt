// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECOMPONENTREQUEST_H
#define QTAWS_DELETECOMPONENTREQUEST_H

#include "imagebuilderrequest.h"

namespace QtAws {
namespace ImageBuilder {

class DeleteComponentRequestPrivate;

class QTAWSIMAGEBUILDER_EXPORT DeleteComponentRequest : public ImageBuilderRequest {

public:
    DeleteComponentRequest(const DeleteComponentRequest &other);
    DeleteComponentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteComponentRequest)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
