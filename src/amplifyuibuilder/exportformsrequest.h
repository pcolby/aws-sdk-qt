// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXPORTFORMSREQUEST_H
#define QTAWS_EXPORTFORMSREQUEST_H

#include "amplifyuibuilderrequest.h"

namespace QtAws {
namespace AmplifyUIBuilder {

class ExportFormsRequestPrivate;

class QTAWSAMPLIFYUIBUILDER_EXPORT ExportFormsRequest : public AmplifyUIBuilderRequest {

public:
    ExportFormsRequest(const ExportFormsRequest &other);
    ExportFormsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ExportFormsRequest)

};

} // namespace AmplifyUIBuilder
} // namespace QtAws

#endif
