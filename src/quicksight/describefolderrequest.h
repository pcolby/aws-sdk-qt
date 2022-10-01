// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFOLDERREQUEST_H
#define QTAWS_DESCRIBEFOLDERREQUEST_H

#include "quicksightrequest.h"

namespace QtAws {
namespace QuickSight {

class DescribeFolderRequestPrivate;

class QTAWSQUICKSIGHT_EXPORT DescribeFolderRequest : public QuickSightRequest {

public:
    DescribeFolderRequest(const DescribeFolderRequest &other);
    DescribeFolderRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFolderRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
