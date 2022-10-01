// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEIPRESTRICTIONRESPONSE_H
#define QTAWS_UPDATEIPRESTRICTIONRESPONSE_H

#include "quicksightresponse.h"
#include "updateiprestrictionrequest.h"

namespace QtAws {
namespace QuickSight {

class UpdateIpRestrictionResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT UpdateIpRestrictionResponse : public QuickSightResponse {
    Q_OBJECT

public:
    UpdateIpRestrictionResponse(const UpdateIpRestrictionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateIpRestrictionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateIpRestrictionResponse)
    Q_DISABLE_COPY(UpdateIpRestrictionResponse)

};

} // namespace QuickSight
} // namespace QtAws

#endif
