// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXPORTTHEMESREQUEST_H
#define QTAWS_EXPORTTHEMESREQUEST_H

#include "amplifyuibuilderrequest.h"

namespace QtAws {
namespace AmplifyUIBuilder {

class ExportThemesRequestPrivate;

class QTAWSAMPLIFYUIBUILDER_EXPORT ExportThemesRequest : public AmplifyUIBuilderRequest {

public:
    ExportThemesRequest(const ExportThemesRequest &other);
    ExportThemesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ExportThemesRequest)

};

} // namespace AmplifyUIBuilder
} // namespace QtAws

#endif
