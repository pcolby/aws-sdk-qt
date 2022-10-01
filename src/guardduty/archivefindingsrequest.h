// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ARCHIVEFINDINGSREQUEST_H
#define QTAWS_ARCHIVEFINDINGSREQUEST_H

#include "guarddutyrequest.h"

namespace QtAws {
namespace GuardDuty {

class ArchiveFindingsRequestPrivate;

class QTAWSGUARDDUTY_EXPORT ArchiveFindingsRequest : public GuardDutyRequest {

public:
    ArchiveFindingsRequest(const ArchiveFindingsRequest &other);
    ArchiveFindingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ArchiveFindingsRequest)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
