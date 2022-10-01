// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETEMPLATEALIASREQUEST_H
#define QTAWS_DELETETEMPLATEALIASREQUEST_H

#include "quicksightrequest.h"

namespace QtAws {
namespace QuickSight {

class DeleteTemplateAliasRequestPrivate;

class QTAWSQUICKSIGHT_EXPORT DeleteTemplateAliasRequest : public QuickSightRequest {

public:
    DeleteTemplateAliasRequest(const DeleteTemplateAliasRequest &other);
    DeleteTemplateAliasRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTemplateAliasRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
