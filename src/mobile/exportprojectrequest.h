// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXPORTPROJECTREQUEST_H
#define QTAWS_EXPORTPROJECTREQUEST_H

#include "mobilerequest.h"

namespace QtAws {
namespace Mobile {

class ExportProjectRequestPrivate;

class QTAWSMOBILE_EXPORT ExportProjectRequest : public MobileRequest {

public:
    ExportProjectRequest(const ExportProjectRequest &other);
    ExportProjectRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ExportProjectRequest)

};

} // namespace Mobile
} // namespace QtAws

#endif
