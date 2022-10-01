// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTCOMPONENTREQUEST_H
#define QTAWS_IMPORTCOMPONENTREQUEST_H

#include "imagebuilderrequest.h"

namespace QtAws {
namespace ImageBuilder {

class ImportComponentRequestPrivate;

class QTAWSIMAGEBUILDER_EXPORT ImportComponentRequest : public ImageBuilderRequest {

public:
    ImportComponentRequest(const ImportComponentRequest &other);
    ImportComponentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ImportComponentRequest)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
