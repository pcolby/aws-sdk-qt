// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDATASETREQUEST_H
#define QTAWS_DELETEDATASETREQUEST_H

#include "quicksightrequest.h"

namespace QtAws {
namespace QuickSight {

class DeleteDataSetRequestPrivate;

class QTAWSQUICKSIGHT_EXPORT DeleteDataSetRequest : public QuickSightRequest {

public:
    DeleteDataSetRequest(const DeleteDataSetRequest &other);
    DeleteDataSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDataSetRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
