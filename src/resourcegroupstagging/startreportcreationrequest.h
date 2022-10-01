// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTREPORTCREATIONREQUEST_H
#define QTAWS_STARTREPORTCREATIONREQUEST_H

#include "resourcegroupstaggingrequest.h"

namespace QtAws {
namespace ResourceGroupsTagging {

class StartReportCreationRequestPrivate;

class QTAWSRESOURCEGROUPSTAGGING_EXPORT StartReportCreationRequest : public ResourceGroupsTaggingRequest {

public:
    StartReportCreationRequest(const StartReportCreationRequest &other);
    StartReportCreationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartReportCreationRequest)

};

} // namespace ResourceGroupsTagging
} // namespace QtAws

#endif
