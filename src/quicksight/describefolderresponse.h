// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFOLDERRESPONSE_H
#define QTAWS_DESCRIBEFOLDERRESPONSE_H

#include "quicksightresponse.h"
#include "describefolderrequest.h"

namespace QtAws {
namespace QuickSight {

class DescribeFolderResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT DescribeFolderResponse : public QuickSightResponse {
    Q_OBJECT

public:
    DescribeFolderResponse(const DescribeFolderRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeFolderRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFolderResponse)
    Q_DISABLE_COPY(DescribeFolderResponse)

};

} // namespace QuickSight
} // namespace QtAws

#endif
