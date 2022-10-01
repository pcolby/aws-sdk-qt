// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETEMPLATEALIASREQUEST_H
#define QTAWS_UPDATETEMPLATEALIASREQUEST_H

#include "quicksightrequest.h"

namespace QtAws {
namespace QuickSight {

class UpdateTemplateAliasRequestPrivate;

class QTAWSQUICKSIGHT_EXPORT UpdateTemplateAliasRequest : public QuickSightRequest {

public:
    UpdateTemplateAliasRequest(const UpdateTemplateAliasRequest &other);
    UpdateTemplateAliasRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateTemplateAliasRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
