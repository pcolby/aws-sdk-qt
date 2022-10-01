// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTOREIMAGEFROMRECYCLEBINRESPONSE_H
#define QTAWS_RESTOREIMAGEFROMRECYCLEBINRESPONSE_H

#include "ec2response.h"
#include "restoreimagefromrecyclebinrequest.h"

namespace QtAws {
namespace Ec2 {

class RestoreImageFromRecycleBinResponsePrivate;

class QTAWSEC2_EXPORT RestoreImageFromRecycleBinResponse : public Ec2Response {
    Q_OBJECT

public:
    RestoreImageFromRecycleBinResponse(const RestoreImageFromRecycleBinRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RestoreImageFromRecycleBinRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RestoreImageFromRecycleBinResponse)
    Q_DISABLE_COPY(RestoreImageFromRecycleBinResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
