// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETEMPLATEREQUEST_H
#define QTAWS_UPDATETEMPLATEREQUEST_H

#include "quicksightrequest.h"

namespace QtAws {
namespace QuickSight {

class UpdateTemplateRequestPrivate;

class QTAWSQUICKSIGHT_EXPORT UpdateTemplateRequest : public QuickSightRequest {

public:
    UpdateTemplateRequest(const UpdateTemplateRequest &other);
    UpdateTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateTemplateRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
