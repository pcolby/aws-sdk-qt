// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEPOLICYTYPERESPONSE_H
#define QTAWS_ENABLEPOLICYTYPERESPONSE_H

#include "organizationsresponse.h"
#include "enablepolicytyperequest.h"

namespace QtAws {
namespace Organizations {

class EnablePolicyTypeResponsePrivate;

class QTAWSORGANIZATIONS_EXPORT EnablePolicyTypeResponse : public OrganizationsResponse {
    Q_OBJECT

public:
    EnablePolicyTypeResponse(const EnablePolicyTypeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const EnablePolicyTypeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnablePolicyTypeResponse)
    Q_DISABLE_COPY(EnablePolicyTypeResponse)

};

} // namespace Organizations
} // namespace QtAws

#endif
