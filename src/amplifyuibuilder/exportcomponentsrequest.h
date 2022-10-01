// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXPORTCOMPONENTSREQUEST_H
#define QTAWS_EXPORTCOMPONENTSREQUEST_H

#include "amplifyuibuilderrequest.h"

namespace QtAws {
namespace AmplifyUIBuilder {

class ExportComponentsRequestPrivate;

class QTAWSAMPLIFYUIBUILDER_EXPORT ExportComponentsRequest : public AmplifyUIBuilderRequest {

public:
    ExportComponentsRequest(const ExportComponentsRequest &other);
    ExportComponentsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ExportComponentsRequest)

};

} // namespace AmplifyUIBuilder
} // namespace QtAws

#endif
