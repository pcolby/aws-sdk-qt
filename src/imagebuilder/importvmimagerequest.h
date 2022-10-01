// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTVMIMAGEREQUEST_H
#define QTAWS_IMPORTVMIMAGEREQUEST_H

#include "imagebuilderrequest.h"

namespace QtAws {
namespace ImageBuilder {

class ImportVmImageRequestPrivate;

class QTAWSIMAGEBUILDER_EXPORT ImportVmImageRequest : public ImageBuilderRequest {

public:
    ImportVmImageRequest(const ImportVmImageRequest &other);
    ImportVmImageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ImportVmImageRequest)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
